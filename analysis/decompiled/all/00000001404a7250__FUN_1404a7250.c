// Function: FUN_1404a7250
// Addr: 1404a7250
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7250(char *param_1,longlong param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_RAX;
  byte *unaff_RBX;
  longlong unaff_RSI;
  char in_CF;
  byte *pbVar7;
  char *pcVar8;
  
  bVar2 = (char)in_RAX + -0xc + in_CF;
  pbVar7 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *pbVar7 = *pbVar7 | bVar2;
  uVar5 = (int)pbVar7 + 0xd00007d4;
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
  uVar6 = (int)pbVar7 + 0x380011ca;
  pcVar8 = (char *)(ulonglong)uVar6;
  bVar2 = (byte)uVar6;
  uVar1 = (undefined3)(uVar6 >> 8);
  if (SCARRY4(uVar5,0x680009f6)) {
    *param_1 = *param_1 + (char)(uVar6 >> 8);
    *pcVar8 = *pcVar8 + bVar2;
    cVar3 = bVar2 + (char)param_2;
    uVar5 = CONCAT31(uVar1,cVar3);
    *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
    if (SCARRY4(uVar5,0x680009f6)) {
      *param_1 = *param_1 + cVar3 + -10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (!SCARRY4(uVar5,0x680009f6)) {
      cVar3 = bVar2 + 2;
      (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + cVar3;
      *(char *)(ulonglong)CONCAT31(uVar1,cVar3) = *(char *)(ulonglong)CONCAT31(uVar1,cVar3) + cVar3;
      uVar4 = in(0xfa);
      uVar5 = CONCAT31(uVar1,uVar4);
      *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + bVar2;
    *unaff_RBX = *unaff_RBX | bVar2;
    *pcVar8 = *pcVar8 + (char)param_1;
    uVar5 = CONCAT31(uVar1,bVar2 & pcVar8[param_2 * 8]);
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (bVar2 & pcVar8[param_2 * 8]);
    uRam00000001944f72c4 = uRam00000001944f72c4 & uVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

