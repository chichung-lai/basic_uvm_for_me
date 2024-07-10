wvSetPosition -win $_nWave1 {("G1" 0)}
wvOpenFile -win $_nWave1 \
           {/home/ICer/Documents/basic_uvm/labs/lab_03_my/sv/tb_top.fsdb}
wvSetCursor -win $_nWave1 52.010403
wvGetSignalOpen -win $_nWave1
wvGetSignalSetScope -win $_nWave1 "/_vcs_msglog"
wvExit
