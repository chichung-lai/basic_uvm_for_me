wvSetPosition -win $_nWave1 {("G1" 0)}
wvOpenFile -win $_nWave1 \
           {/home/ICer/Documents/basic_uvm/labs/lab_05/tb/tb_top.fsdb}
wvResizeWindow -win $_nWave1 -10 20 1918 877
wvGetSignalOpen -win $_nWave1
wvExit
