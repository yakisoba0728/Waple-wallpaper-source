// Function: FUN_1404c9f1c
// Addr: 1404c9f1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c9f4b) overlaps instruction at (ram,0x0001404c9f4a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c9f4a) */

void FUN_1404c9f1c(longlong param_1,byte *param_2,char param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  byte bVar7;
  uint *in_RAX;
  uint *puVar5;
  longlong lVar6;
  byte *pbVar9;
  byte bVar10;
  char *pcVar11;
  longlong unaff_RBP;
  byte *unaff_RSI;
  undefined7 uVar8;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar3 = *in_RAX;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar4;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar10 = (byte)param_2;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  if (SCARRY1((char)uVar3,bVar4)) {
    *(byte *)in_RAX = (char)*in_RAX + bVar7;
    bVar1 = *param_4;
    *param_4 = *param_4 + bVar4;
    bVar4 = bVar4 + 6 + CARRY1(bVar1,bVar4);
    puVar5 = (uint *)CONCAT71(uVar8,bVar4);
    *(char *)(param_1 + (longlong)puVar5) = *(char *)(param_1 + (longlong)puVar5) + bVar10;
    cRam0000000143aca3f5 = cRam0000000143aca3f5 + param_3;
    *param_2 = *param_2 ^ bVar4;
    *puVar5 = *puVar5 & (uint)param_1;
    lVar6 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar7,bVar4 + (char)*puVar5));
    pcVar11 = (char *)(lVar6 + -0x57ffcd74);
    *pcVar11 = *pcVar11 + param_3;
    pcVar11 = (char *)(lVar6 + 0x21004c9e);
    *pcVar11 = *pcVar11 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = bVar4 ^ (byte)*in_RAX;
  pbVar9 = (byte *)CONCAT71(uVar8,bVar4);
  *(int *)(param_1 + 0x32) = (int)param_2;
  pcVar11 = (char *)(unaff_RBP + 0x1201004a + (longlong)pbVar9 * 8);
  *pcVar11 = *pcVar11 + (byte)param_1;
  *pbVar9 = *pbVar9 | bVar4;
  cVar2 = bVar10 + param_2[param_1];
  pcVar11 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) + pbVar9[param_1] +
                                      CARRY1(bVar10,param_2[param_1]),cVar2));
  *pcVar11 = *pcVar11 + cVar2;
  bVar4 = (byte)param_1 ^ *unaff_RSI;
  lVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar4);
  if (lVar6 == 1 || bVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar9 = (byte *)(lVar6 + -2);
  if (pbVar9 == (byte *)0x0 || bVar4 == 0) {
    uRam00000001b4599f5a = uRam00000001b4599f5a & (uint)pbVar9;
  }
  else {
    *pbVar9 = *pbVar9 ^ bVar7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

