simSetSimulator "-vcssv" -exec "./simv" -args \
           "+UVM_TESTNAME=my_test +UVM_VERDI_TRACE=UVM_AWARE+RAL+HIER+COMPWAVE +UVM_TR_RECORD -a sim.log" \
           -uvmDebug on -simDelim
debImport "-i" "-simflow" "-dbdir" "./simv.daidir"
srcTBInvokeSim
srcTBRunSim
debExit
