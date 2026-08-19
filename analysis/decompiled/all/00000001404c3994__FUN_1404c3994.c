// Function: FUN_1404c3994
// Addr: 1404c3994
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c399a) overlaps instruction at (ram,0x0001404c3999)
    */

void FUN_1404c3994(longlong param_1,char *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint *in_RAX;
  byte *pbVar6;
  char cVar7;
  char unaff_BL;
  byte bVar8;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_ESI;
  undefined4 unaff_00000034;
  char in_ZF;
  
  cVar7 = (char)param_2;
  pbVar6 = (byte *)(param_1 + -1);
  if (pbVar6 != (byte *)0x0 && in_ZF == '\0') {
    cVar3 = in(0x2b);
    in_RAX = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',cVar3));
    if (pbVar6 != (byte *)0x0) {
      pcVar5 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x1c);
      *pcVar5 = *pcVar5 + unaff_BH;
      uVar4 = (uint)in_RAX - *in_RAX;
      pcVar5 = (char *)(ulonglong)uVar4;
      *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_ESI +
           (uint)((uint)in_RAX < *in_RAX);
      *pcVar5 = *pcVar5 + (char)uVar4;
      *pcVar5 = *pcVar5 + (char)uVar4;
      *pbVar6 = *pbVar6 + unaff_BL;
      uVar4 = uVar4 & 0x1130009;
      *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 & (byte)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)in_RAX = (char)*in_RAX + cVar3;
    out((short)param_2,cVar3);
  }
  *param_2 = *param_2 + (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x12);
  *pcVar5 = *pcVar5 + cVar7;
  cRam000000003300579a = cRam000000003300579a + unaff_BH;
  uVar4 = in((short)param_2);
  uVar4 = (uVar4 - *(int *)(ulonglong)uVar4) - *(int *)(ulonglong)(uVar4 - *(int *)(ulonglong)uVar4)
  ;
  pcVar5 = (char *)(ulonglong)uVar4;
  cVar3 = (char)uVar4;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  bVar8 = unaff_BL + 0x34;
  *pcVar5 = *pcVar5 + cVar3;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar8;
  uVar2 = *(undefined4 *)pbVar6;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar8)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,bVar8)) + cVar7;
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) +
       CONCAT22((short)((ulonglong)param_2 >> 0x10),CONCAT11(0x34,cVar7));
  pcVar5[CONCAT44(unaff_00000034,unaff_ESI) * 8] =
       pcVar5[CONCAT44(unaff_00000034,unaff_ESI) * 8] +
       (char)pbVar6 + (char)uVar2 + CARRY1(bVar1,bVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

