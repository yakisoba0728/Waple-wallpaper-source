// Function: FUN_1404c97a0
// Addr: 1404c97a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c9852) */
/* WARNING: Removing unreachable block (ram,0x0001404c985f) */
/* WARNING: Removing unreachable block (ram,0x0001404c9865) */

void FUN_1404c97a0(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined3 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte *in_RAX;
  uint *puVar7;
  byte *pbVar8;
  char cVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  longlong unaff_RDI;
  char in_ZF;
  
  cVar9 = (char)param_2;
  if (param_1 != 1 && in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_RAX[0x21004c96] = in_RAX[0x21004c96] + unaff_BH;
  *in_RAX = *in_RAX + (byte)in_RAX;
  *in_RAX = *in_RAX + (char)(param_2 >> 8);
  if (param_1 + -2 == 0 || *in_RAX == 0) {
    in_RAX[0x31] = in_RAX[0x31] + cVar9;
    in_RAX[0x1004c96] = in_RAX[0x1004c96] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001346197ec = uRam00000001346197ec & param_2;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(byte)in_RAX | *in_RAX)
                           );
  uVar6 = (uint)puVar7 | *puVar7;
  bVar4 = (byte)uVar6;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((byte)(uVar6 >> 8) | bVar4,bVar4));
  bVar5 = bVar4 + *(char *)(ulonglong)uVar6;
  uVar3 = (undefined3)(uVar6 >> 8);
  if (!SCARRY1(bVar4,*(char *)(ulonglong)uVar6)) {
    bVar5 = bVar5 ^ *(byte *)(ulonglong)CONCAT31(uVar3,bVar5);
    bVar5 = bVar5 ^ *(byte *)(ulonglong)CONCAT31(uVar3,bVar5);
    uVar6 = CONCAT31(uVar3,bVar5);
    pbVar8 = (byte *)(ulonglong)uVar6;
    *(char *)(unaff_RDI + 0x21004c) = *(char *)(unaff_RDI + 0x21004c) + cVar9;
    bVar4 = *pbVar8;
    bVar1 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    if (SCARRY1(bVar1,bVar5)) {
      uVar2 = (uint)&stack0xfffffffffffffff8 + uVar6;
      cRam000000014baca493 = cRam000000014baca493 + (char)(param_1 + -2);
      *(ulonglong *)((ulonglong)(uVar2 + CARRY1(bVar4,bVar5)) - 8) =
           (ulonglong)
           (uVar6 + param_2 +
           (uint)(CARRY4((uint)&stack0xfffffffffffffff8,uVar6) ||
                 CARRY4(uVar2,(uint)CARRY1(bVar4,bVar5))));
      *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
           param_2;
      *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
           cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)(unaff_RDI + 0x1f01004c) = *(char *)(unaff_RDI + 0x1f01004c) + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

