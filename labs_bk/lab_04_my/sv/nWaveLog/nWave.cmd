wvSetPosition -win $_nWave1 {("G1" 0)}
wvOpenFile -win $_nWave1 \
           {/home/ICer/Documents/basic_uvm/labs/lab_04_my/sv/tb_top.fsdb}
wvGetSignalOpen -win $_nWave1
wvSetCursor -win $_nWave1 195840940.066840
wvSelectGroup -win $_nWave1 {G1}
wvSelectGroup -win $_nWave1 {G1}
wvGetSignalOpen -win $_nWave1
wvExit
