// Function: FUN_1404acadc
// Addr: 1404acadc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acadc(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  byte bVar7;
  char cVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong *unaff_RBP;
  longlong lVar12;
  longlong unaff_RDI;
  char in_AF;
  char *pcVar6;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar9 = (undefined1)param_2;
  cVar8 = (char)((ulonglong)param_1 >> 8);
  bVar7 = (byte)param_1;
  *(undefined1 *)(unaff_RDI + -0x49abfff0) = unaff_BL;
  *param_1 = *param_1;
  uVar5 = in_EAX + 0xe4050002U | 0x109f8800;
  pcVar6 = (char *)(ulonglong)uVar5;
  pcVar6[-0x3ffef61] = pcVar6[-0x3ffef61] + unaff_BH;
  lVar12 = *unaff_RBP;
  *param_1 = *param_1 + (char)unaff_RBP + '\b';
  bVar4 = (byte)(in_EAX + 0xe4050002U);
  *pcVar6 = *pcVar6 + bVar4;
  pbVar1 = (byte *)(pcVar6 + -0x47ffef61);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar3 = (undefined2)(uVar5 >> 0x10);
  pcVar6 = (char *)(ulonglong)
                   CONCAT22(uVar3,CONCAT11(((char)*pbVar1 < '\0') << 7 | (*pbVar1 == 0) << 6 |
                                           in_AF << 4 | ((POPCOUNT(*pbVar1) & 1U) == 0) << 2 | 2U |
                                           CARRY1(bVar2,bVar7),bVar4));
  *pcVar6 = *pcVar6 + bVar4 + CARRY1(bVar2,bVar7);
  *param_1 = *param_1 + (char)lVar12 + '\b';
  *pcVar6 = *pcVar6 + bVar4;
  pbVar1 = (byte *)(pcVar6 + -0x77ffef61);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  pcVar6 = (char *)(ulonglong)
                   CONCAT22(uVar3,CONCAT11(((char)*pbVar1 < '\0') << 7 | (*pbVar1 == 0) << 6 |
                                           in_AF << 4 | ((POPCOUNT(*pbVar1) & 1U) == 0) << 2 | 2U |
                                           CARRY1(bVar2,bVar4),bVar4));
  *pcVar6 = *pcVar6 + bVar4 + CARRY1(bVar2,bVar4);
  *(longlong *)lVar12 = lVar12 + 8;
  *param_1 = *param_1 + bVar4;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - (int)param_1;
  *param_1 = *param_1 + cVar8;
  *param_1 = *param_1 + cVar8;
  *(int *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(0x4a,uVar9))) =
       *(int *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(0x4a,uVar9))) +
       CONCAT22(uVar10,CONCAT11(0x4a,uVar9));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

