// Function: FUN_1404a8c68
// Addr: 1404a8c68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8c68(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char cVar8;
  uint *in_RAX;
  uint *puVar6;
  int *piVar7;
  char *pcVar9;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  uVar4 = (uint)in_RAX | *in_RAX;
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  puVar6 = (uint *)(ulonglong)uVar4;
  uStack_8 = 0x21004a8b;
  *(char *)puVar6 = (char)*puVar6 + (char)uVar4;
  uVar5 = uVar4 | *puVar6 | *(uint *)(ulonglong)(uVar4 | *puVar6);
  puVar6 = (uint *)(ulonglong)uVar5;
  puStack_10 = (undefined1 *)&uStack_8;
  uVar4 = *(uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),
                            (char)param_2 + (char)((ulonglong)param_1 >> 8));
  pcVar9 = (char *)(ulonglong)uVar4;
  *puVar6 = *puVar6 & uVar5;
  *(char *)puVar6 = (char)*puVar6 + (char)uVar5;
  uVar5 = uVar5 | *puVar6;
  *pcVar9 = *pcVar9 + (char)&puStack_10;
  cVar3 = (char)uVar5;
  *(char *)((ulonglong)uVar5 * 2) = *(char *)((ulonglong)uVar5 * 2) + cVar3;
  cVar8 = (char)(uVar5 >> 8) + cVar3;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(cVar8,cVar3));
  uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar3 + *(char *)(ulonglong)uVar5);
  pcVar9 = (char *)((longlong)(ulonglong)uVar5 + (longlong)pcVar9);
  *pcVar9 = *pcVar9 + cVar8;
  uVar5 = uVar5 | *(uint *)(ulonglong)uVar5;
  piVar7 = (int *)(ulonglong)uVar5;
  cVar3 = (byte)uRam00000000bc000bfb;
  *(int *)((longlong)&puStack_10 + (longlong)piVar7) =
       *(int *)((longlong)&puStack_10 + (longlong)piVar7) + -0x43fff405;
  pbVar1 = (byte *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),(byte)uRam00000000bc000bfb) +
                   (longlong)piVar7);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 5;
  uVar4 = uVar5 + *piVar7 + (uint)(4 < bVar2) | 0x21700bf0;
  uRam00000000bc000bfb =
       CONCAT31(uRam00000000bc000bfb._1_3_,(byte)uRam00000000bc000bfb | (byte)uVar4);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL ^ unaff_BH)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL ^ unaff_BH)) + -1;
  pcVar9 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x23fff401);
  *pcVar9 = *pcVar9 + -5;
  *(uint *)((ulonglong)uRam00000000bc000bfb + 0xbc000bfb) =
       *(uint *)((ulonglong)uRam00000000bc000bfb + 0xbc000bfb) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

