// Function: FUN_1404ac088
// Addr: 1404ac088
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ac095) overlaps instruction at (ram,0x0001404ac094)
    */

void FUN_1404ac088(longlong param_1,int *param_2)

{
  int in_EAX;
  uint uVar1;
  char *pcVar3;
  char cVar4;
  byte *pbVar2;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 + (int)param_1;
  uVar1 = in_EAX + 0x6620a00;
  pbVar2 = (byte *)(ulonglong)uVar1;
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || uVar1 == 0) {
    if (!SCARRY4(in_EAX,0x6620a00)) {
      cVar4 = cVar4 + *pbVar2;
    }
  }
  else {
    *pbVar2 = *pbVar2 ^ (byte)uVar1;
    *pcVar3 = *pcVar3 + (char)(uVar1 >> 8);
    pbVar2 = (byte *)(ulonglong)(in_EAX + 0x6a670a02);
  }
  *pbVar2 = *pbVar2 + (char)pbVar2;
  uRam00000001a44fc0a0 = uRam00000001a44fc0a0 & (uint)pbVar2;
  pbVar2 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(cVar4,(char)param_2)) +
                   -0x55acfff1);
  *pbVar2 = *pbVar2 & (byte)((ulonglong)pcVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

