// Function: FUN_1404bde4c
// Addr: 1404bde4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bde4c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 *puVar7;
  undefined8 *unaff_RBP;
  longlong in_FS_OFFSET;
  float10 in_ST0;
  undefined1 auStack_1f [7];
  undefined8 uStack_18;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  uRam0000000165cc4a54 = 0;
  *(longlong *)(in_FS_OFFSET + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       (longlong)in_ST0;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & (uint)param_1;
  param_1[-0x18] = param_1[-0x18] + (char)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  uVar4 = uRam00000000a8170008;
  puVar7 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar3 = '\x1b';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar7 = puVar7 + -1;
    *puVar7 = *unaff_RBP;
    cVar3 = cVar3 + -1;
  } while ('\0' < cVar3);
  uVar5 = uRam00000000a8170008 | 0xa8170008;
  pbVar1 = (byte *)((ulonglong)uVar5 + 0xc);
  uRam00000000a8170008 = uRam00000000a8170008 | 0xa8170008;
  *pbVar1 = *pbVar1 | unaff_BH;
  pcVar2 = (char *)((ulonglong)uVar5 + (longlong)&stack0xfffffffffffffff0 * 2);
  *pcVar2 = *pcVar2 + (char)uVar5;
  pcVar2 = (char *)((ulonglong)(uVar4 | 0xad976c08) * 5 + 0x25);
  *pcVar2 = *pcVar2 + cVar6;
  pcVar2 = (char *)((ulonglong)(uVar4 | 0xad976c08) - 0x23);
  *pcVar2 = *pcVar2 + cVar6;
  *param_4 = *param_4 + (char)auStack_1f + '(';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

