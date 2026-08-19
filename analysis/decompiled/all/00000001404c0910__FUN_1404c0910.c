// Function: FUN_1404c0910
// Addr: 1404c0910
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0910(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  uint *puVar5;
  byte bVar6;
  byte unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RSI;
  char unaff_R12B;
  undefined1 auStack_18 [24];
  
  bVar6 = (byte)param_1;
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX & unaff_BL);
  *puVar5 = *puVar5 | (uint)puVar5;
  uVar4 = (uint)puVar5 + 0x110024d4;
  if (uVar4 != 0) {
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + bVar6;
    (&stack0x00000000)[param_2 * 2] = (&stack0x00000000)[param_2 * 2] + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_R12B;
  cRam0000000000000008 = cRam0000000000000008 + '\b';
  pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x3400286f);
  *pcVar2 = *pcVar2 + (char)param_2;
  bRam0000000000000031 = bRam0000000000000031 | bVar6;
  cRam0000000020002871 = cRam0000000020002871 + (char)param_2;
  cRam0000000000000008 = cRam0000000000000008 + '\b' + bVar6;
  bRam0000000000000011 = bRam0000000000000011 | bVar6;
  cRam0000000078000af0 = cRam0000000078000af0 + '\b';
  cRamffffffffffffffd0 = cRamffffffffffffffd0 + (char)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + -0x68);
  bVar3 = *pbVar1;
  bRam000000014a44916b = unaff_BL;
  *pbVar1 = *pbVar1 + unaff_BL;
  LocalDescriptorTableRegister(*(undefined2 *)(CONCAT71(unaff_00000019,unaff_BL) + -0x78));
  cRam0000000000000008 = cRam0000000000000008 + '\b' + CARRY1(bVar3,unaff_BL);
  if (-1 < cRam0000000000000008) {
    pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x68);
    *pcVar2 = *pcVar2 + '\b';
    *unaff_RSI = *unaff_RSI + (int)auStack_18;
    *(byte *)unaff_RSI = (char)*unaff_RSI + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

