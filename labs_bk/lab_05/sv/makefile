
all: comp run
comp:	
	vcs -full64 \
	-kdb -lca \
	-debug_access+all \
	-ntb_opts uvm \
	-sverilog \
	-timescale=1ns/1ns \
	top.sv \
	/home/ICer/Documents/basic_uvm/uvm-1.1d/src/uvm_pkg.sv \
	-l compile.log
#	+define+UVM_NO_DPI \
#	router.v \

run:
	./simv \
	+UVM_TESTNAME=my_test \
	+UVM_VERDI_TRACE="UVM_AWARE+RAL+HIER+COMPWAVE" \
	+UVM_TR_RECORD \
	-l sim.log &
#	+UVM_TESTNAME=my_test_type_da3 \
#	+UVM_TESTNAME=my_test_type_da3 \
#	-gui=verdi \

clean:
	rm -r csrc inter.fsdb Makefile_sim novas.conf novas_dump.log novas.rc sim.log simv simv.daidir ucli.key vc_hdrs.h verdiLog *fsdb*
