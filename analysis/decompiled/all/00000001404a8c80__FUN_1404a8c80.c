// Function: FUN_1404a8c80
// Addr: 1404a8c80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8c80(undefined8 param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char cVar7;
  uint *in_RAX;
  int *piVar6;
  char *pcVar8;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  
  uVar5 = *param_2;
  pcVar8 = (char *)(ulonglong)uVar5;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar4 = (uint)in_RAX | *in_RAX;
  *pcVar8 = *pcVar8 + (char)&stack0xfffffffffffffff8;
  cVar3 = (char)uVar4;
  *(char *)((ulonglong)uVar4 * 2) = *(char *)((ulonglong)uVar4 * 2) + cVar3;
  cVar7 = (char)(uVar4 >> 8) + cVar3;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar7,cVar3));
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3 + *(char *)(ulonglong)uVar4);
  pcVar8 = (char *)((longlong)(ulonglong)uVar4 + (longlong)pcVar8);
  *pcVar8 = *pcVar8 + cVar7;
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  piVar6 = (int *)(ulonglong)uVar4;
  cVar3 = (byte)uRam00000000bc000bfb;
  *(int *)(&stack0xfffffffffffffff8 + (longlong)piVar6) =
       *(int *)(&stack0xfffffffffffffff8 + (longlong)piVar6) + -0x43fff405;
  pbVar1 = (byte *)((ulonglong)CONCAT31((int3)(uVar5 >> 8),(byte)uRam00000000bc000bfb) +
                   (longlong)piVar6);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 5;
  uVar5 = uVar4 + *piVar6 + (uint)(4 < bVar2) | 0x21700bf0;
  uRam00000000bc000bfb =
       CONCAT31(uRam00000000bc000bfb._1_3_,(byte)uRam00000000bc000bfb | (byte)uVar5);
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL ^ unaff_BH)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL ^ unaff_BH)) + -1;
  pcVar8 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x23fff401);
  *pcVar8 = *pcVar8 + -5;
  *(uint *)((ulonglong)uRam00000000bc000bfb + 0xbc000bfb) =
       *(uint *)((ulonglong)uRam00000000bc000bfb + 0xbc000bfb) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

