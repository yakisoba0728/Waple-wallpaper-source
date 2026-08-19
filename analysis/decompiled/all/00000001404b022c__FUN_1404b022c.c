// Function: FUN_1404b022c
// Addr: 1404b022c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b022c(char *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  byte bVar4;
  
  uVar3 = in_EAX | 0x4001fd4;
  if (uVar3 != 0) {
    pbVar1 = (byte *)((ulonglong)uVar3 - 0x2effeaef);
    bVar2 = *pbVar1;
    bVar4 = (byte)((uint)param_2 >> 8);
    *pbVar1 = *pbVar1 + bVar4;
    iRam000000018b4c4a3f = iRam000000018b4c4a3f + param_2 + (uint)CARRY1(bVar2,bVar4);
    *param_1 = *param_1 + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

