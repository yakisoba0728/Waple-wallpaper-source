// Function: FUN_1404b4e2c
// Addr: 1404b4e2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4e2c(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  char *pcVar6;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RDI;
  byte *pbVar5;
  
  uVar4 = in_EAX + 0xd0000a64;
  pbVar5 = (byte *)(ulonglong)uVar4;
  *param_2 = *param_2 - unaff_BL;
  pcVar6 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                            CONCAT11((char)((ulonglong)param_1 >> 8) +
                                     (char)((ulonglong)param_2 >> 8),(char)param_1));
  *param_2 = *param_2 - unaff_BL;
  pcVar1 = (char *)((longlong)pcVar6 * 2 + 0x21004b);
  *pcVar1 = *pcVar1 + unaff_BH;
  *pbVar5 = *pbVar5 + (char)uVar4;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 >> 1;
  iVar3 = CONCAT31((int3)(uVar4 >> 8),((char)uVar4 - *pbVar5) - (bVar2 & 1));
  *param_2 = *param_2 - unaff_BL;
  pcVar1 = (char *)((longlong)pcVar6 * 2 + 0x701004b);
  *pcVar1 = *pcVar1 + unaff_BH;
  uVar4 = iVar3 + 0x5e00700;
  if (!SCARRY4(iVar3,0x5e00700)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 ^ (byte)uVar4;
  *pcVar6 = *pcVar6 + (byte)uVar4;
  syscall();
  *unaff_RDI = *unaff_RDI + '_';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

