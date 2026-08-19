// Function: FUN_14049f50c
// Addr: 14049f50c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f50c(int *param_1,uint *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  longlong lVar5;
  char *pcVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined6 uVar9;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar7 = SUB81(param_2,0);
  cVar2 = (char)in_RAX;
  pcVar6 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar2,cVar2));
  *pcVar6 = *pcVar6 + cVar2;
  *param_2 = *param_2 & (uint)param_1;
  lVar5 = CONCAT71((int7)((ulonglong)pcVar6 >> 8),cVar2);
  bVar8 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(CONCAT71(unaff_00000021,unaff_SPL) + lVar5);
  uVar4 = (int)lVar5 + 0x834;
  *param_1 = *param_1 + 0x1812200;
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar6 = *pcVar6 + bVar8;
  *param_4 = *param_4 + unaff_SPL;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                   CONCAT11((byte)(uVar4 >> 8) |
                            *(byte *)(CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + (longlong)param_1),
                            (byte)uVar4 | *(byte *)((ulonglong)uVar4 * 2))) + 0x22000954;
  pcVar6 = (char *)(ulonglong)uVar4;
  *param_1 = *param_1 + 0x1813e00;
  bVar3 = (byte)uVar4;
  pcVar6[-0xc] = pcVar6[-0xc] + bVar3;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar6 = *pcVar6 + bVar3;
  *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + (char)(uVar4 >> 8);
  *param_1 = *param_1 + 0x1813e00;
  pcVar6[-0xc] = pcVar6[-0xc] + bVar3;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar6 = *pcVar6 + bVar3;
  *pcVar6 = *pcVar6 + bVar3;
  *param_1 = *param_1 + 0x1812200;
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar6 = *pcVar6 + bVar8;
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar3;
  iRam00000001484b0667 = iRam00000001484b0667 + uVar4 + (uint)CARRY1(bVar1,bVar3);
  *(uint *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) =
       *(int *)CONCAT62(uVar9,CONCAT11(bVar8,uVar7)) + (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

