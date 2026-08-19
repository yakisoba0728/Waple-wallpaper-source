// Function: FUN_1404a8c94
// Addr: 1404a8c94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8c94(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  char *pcVar5;
  uint *puVar6;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  int *piVar7;
  char cVar8;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar3 = (char)in_RAX;
  cVar8 = (char)((ulonglong)in_RAX >> 8) + cVar3;
  pcVar5 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar8,cVar3));
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)pcVar5 >> 8),cVar3 + *pcVar5);
  *(char *)((longlong)puVar6 + param_1) = *(char *)((longlong)puVar6 + param_1) + cVar8;
  uVar4 = (uint)puVar6 | *puVar6;
  piVar7 = (int *)(ulonglong)uVar4;
  cVar3 = (byte)uRam00000000bc000bfb;
  *(int *)(&stack0x00000000 + (longlong)piVar7) =
       *(int *)(&stack0x00000000 + (longlong)piVar7) + -0x43fff405;
  pbVar1 = (byte *)(CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)uRam00000000bc000bfb) +
                   (longlong)piVar7);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 5;
  uVar4 = uVar4 + *piVar7 + (uint)(4 < bVar2) | 0x21700bf0;
  uRam00000000bc000bfb =
       CONCAT31(uRam00000000bc000bfb._1_3_,(byte)uRam00000000bc000bfb | (byte)uVar4);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL ^ unaff_BH)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL ^ unaff_BH)) + -1;
  pcVar5 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x23fff401);
  *pcVar5 = *pcVar5 + -5;
  *(uint *)((ulonglong)uRam00000000bc000bfb + 0xbc000bfb) =
       *(uint *)((ulonglong)uRam00000000bc000bfb + 0xbc000bfb) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

