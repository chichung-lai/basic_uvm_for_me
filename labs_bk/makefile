all: comp run
comp:	
	vcs -full64 \
	-kdb -lca \
	-debug_access+all \
	-ntb_opts uvm \
	-sverilog \
	-timescale=1ns/1ns \
	test.sv \
	+define+UVM_NO_DPI \
	/home/ICer/Documents/basic_uvm/uvm-1.1d/src/uvm_pkg.sv
	-l compile.log

run:
	./simv \
	+UVM_TESTNAME=my_test \
	-gui=verdi \
	+UVM_VERDI_TRACE="UVM_AWARE+RAL+HIER+COMPWAVE" \
	+UVM_TR_RECORD \
	-l sim.log &

