
## 
## -------------------------------------------------------------
##    Copyright 2010-2011 Synopsys, Inc.
##    All Rights Reserved Worldwide
## 
##    Licensed under the Apache License, Version 2.0 (the
##    "License"); you may not use this file except in
##    compliance with the License.  You may obtain a copy of
##    the License at
## 
##        http://www.apache.org/licenses/LICENSE-2.0
## 
##    Unless required by applicable law or agreed to in
##    writing, software distributed under the License is
##    distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
##    CONDITIONS OF ANY KIND, either express or implied.  See
##    the License for the specific language governing
##    permissions and limitations under the License.
## -------------------------------------------------------------
## 

x: all

#
# Include file for VCS Makefiles
#

UVM_VERBOSITY =	UVM_HIGH
TESTNAME = my_test
FSDB = 1
COV = 1
SEQ_NUM = 1

#
# Note that +acc and +vpi have an adverse impact on performance
# and should not be used unless necessary.
#
# They are used here because they are required by some examples
# (backdoor register accesses).
#


TEST = ../test/
N_ERRS = 0
N_FATALS = 0
SEED = 1

VCS =	vcs -sverilog -timescale=1ns/1ns \
	+acc +vpi \
	-debug_all -fsdb\
	-CFLAGS -DVCS +plusarg_save +ntb_random_seed_automatic \
	-ntb_opts uvm-1.1 \

SIMV = 	./simv +UVM_VERBOSITY=$(UVM_VERBOSITY) +UVM_TESTNAME=$(TESTNAME) +fsdb=$(FSDB) +SEQ_NUM=$(SEQ_NUM) -l vcs_run.log \


all: comp run

FILELIST =  -full64 +lint=TFIPC-L -vera -kdb \
                +notimingcheck +nospecify +define+functional \
                -P /nas/usr/novas/Novas/share/PLI/vcs72/LINUX64/debussy.tab \
                /nas/usr/novas/Novas/share/PLI/vcs72/LINUX64/pli.a \
                +incdir+. \
                +incdir+../env \
                +incdir+../test \
                -f ./filelist/tb.list \

comp:
	$(VCS) $(FILELIST) +define+SIM_SPEEDUP -l ./vcs_compile.log  +incdir+../sv/

run:
	$(SIMV) +LOADMEM=1 

cov:
	urg -dir ../../verification/*/simv.vdb -dbname ./merged -report urgReport

#	urg -dir ../../verification/*/simv.vdb -dbname merged -report urgReport

verdi:
	verdi -f filst.f -ssf top.fsdb &
clean:
	rm -rf *~ core csrc simv* vc_hdrs.h ucli.key urg* *.log verdiLog novas* stack* pre* 

