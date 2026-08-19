// Function: FUN_1404ade68
// Addr: 1404ade68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404adea5) overlaps instruction at (ram,0x0001404adea4)
    */

void FUN_1404ade68(char *param_1,uint *param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  char cVar7;
  uint *in_RAX;
  char *pcVar5;
  byte bVar8;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  byte *pbVar6;
  
  bVar8 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar3 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  *(char *)(unaff_RBP + 0x12) = *(char *)(unaff_RBP + 0x12) + unaff_BH;
  cVar1 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar8;
  cVar7 = (char)((ulonglong)in_RAX >> 8);
  if (SCARRY1(cVar1,bVar8) != *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0')
  {
    pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x21004a);
    *pcVar5 = *pcVar5 + unaff_BL;
    *(byte *)in_RAX = (byte)*in_RAX | bVar3;
    pcVar5 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11(cVar7 + (char)((ulonglong)param_2 >> 8),bVar3));
    *pcVar5 = *pcVar5 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  pbVar6 = (byte *)(in_FS_OFFSET + (longlong)in_RAX);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + param_3;
  if (SCARRY1(bVar2,param_3) == (char)*pbVar6 < '\0') {
    *param_1 = *param_1 + cVar7;
  }
  else {
    cVar1 = *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar8;
    if (SCARRY1(cVar1,bVar8) != *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0'
       ) goto code_r0x0001404ade93;
  }
  bVar8 = bVar8 & (byte)*in_RAX;
  *(char *)param_2 = (char)*param_2 + cVar7;
  in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            bVar3 | *(byte *)(in_FS_OFFSET + (longlong)in_RAX));
code_r0x0001404ade93:
  pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x801004a);
  *pcVar5 = *pcVar5 + unaff_BL;
  uVar4 = (int)in_RAX + *in_RAX;
  pbVar6 = (byte *)(ulonglong)uVar4;
  bVar3 = (byte)uVar4;
  *(byte *)(param_2 + 1) = (byte)param_2[1] | bVar3;
  *(char *)param_2 = (char)*param_2;
  *pbVar6 = *pbVar6 + bVar3;
  *param_2 = *param_2 & (uint)&stack0x00000000;
  *pbVar6 = *pbVar6 | bVar3;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                   CONCAT11((byte)(uVar4 >> 8) &
                            *(byte *)((longlong)param_2 +
                                     CONCAT71((int7)((ulonglong)param_1 >> 8),bVar8)),bVar3)) +
          0xeefff41c;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

