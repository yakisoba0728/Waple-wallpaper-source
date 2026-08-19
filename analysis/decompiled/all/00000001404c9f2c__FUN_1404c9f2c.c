// Function: FUN_1404c9f2c
// Addr: 1404c9f2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c9f4b) overlaps instruction at (ram,0x0001404c9f4a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c9f4a) */

void FUN_1404c9f2c(longlong param_1,int *param_2)

{
  char cVar1;
  byte *in_RAX;
  byte bVar2;
  byte *pbVar4;
  char *pcVar5;
  byte *unaff_RSI;
  longlong lVar3;
  
  *param_2 = *param_2 + (int)param_2;
  *in_RAX = *in_RAX | (byte)in_RAX;
  cVar1 = (byte)param_2 + *(byte *)((longlong)param_2 + param_1);
  pcVar5 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((char)((ulonglong)param_2 >> 8) + in_RAX[param_1] +
                                     CARRY1((byte)param_2,*(byte *)((longlong)param_2 + param_1)),
                                     cVar1));
  *pcVar5 = *pcVar5 + cVar1;
  bVar2 = (byte)param_1 ^ *unaff_RSI;
  lVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar2);
  if (lVar3 == 1 || bVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar4 = (byte *)(lVar3 + -2);
  if (pbVar4 == (byte *)0x0 || bVar2 == 0) {
    uRam00000001b4599f5a = uRam00000001b4599f5a & (uint)pbVar4;
  }
  else {
    *pbVar4 = *pbVar4 ^ (byte)((ulonglong)in_RAX >> 8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

