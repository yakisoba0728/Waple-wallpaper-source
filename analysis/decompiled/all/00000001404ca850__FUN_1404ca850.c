// Function: FUN_1404ca850
// Addr: 1404ca850
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca850(byte *param_1,byte param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined3 uVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  byte *in_RAX;
  undefined7 uVar10;
  longlong lVar8;
  byte *pbVar9;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  byte unaff_R12B;
  undefined1 auStack_10 [8];
  uint uVar3;
  
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar6 = (byte)in_RAX ^ *in_RAX;
  lVar8 = CONCAT71(uVar10,bVar6 ^ *(byte *)CONCAT71(uVar10,bVar6));
  bVar6 = *param_1;
  *param_1 = *param_1 + unaff_R12B;
  puVar5 = (uint *)(lVar8 * 2);
  uVar2 = *puVar5;
  uVar7 = (uint)lVar8;
  uVar3 = *puVar5;
  *puVar5 = uVar3 + uVar7 + (uint)CARRY1(bVar6,unaff_R12B);
  piVar1 = (int *)(unaff_RDI + 4 + lVar8);
  *piVar1 = *piVar1 + (int)auStack_10 +
            (uint)(CARRY4(uVar2,uVar7) || CARRY4(uVar3 + uVar7,(uint)CARRY1(bVar6,unaff_R12B)));
  uVar7 = uVar7 + 0x40000634;
  uVar4 = (undefined3)(uVar7 >> 8);
  bVar6 = (byte)uVar7 ^ *(byte *)(ulonglong)uVar7;
  bVar6 = bVar6 ^ *(byte *)(ulonglong)CONCAT31(uVar4,bVar6);
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar4,bVar6);
  *param_4 = *param_4 + (char)&stack0xffffffffffffffe8;
  *pbVar9 = *pbVar9 + bVar6;
  pbVar9[-5] = pbVar9[-5] + bVar6;
  *param_4 = *param_4 + (bVar6 ^ *pbVar9 ^ *(byte *)(ulonglong)CONCAT31(uVar4,bVar6 ^ *pbVar9));
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (param_2 & unaff_BH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

