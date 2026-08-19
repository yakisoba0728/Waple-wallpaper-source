// Function: FUN_1404c97e0
// Addr: 1404c97e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c9852) */
/* WARNING: Removing unreachable block (ram,0x0001404c985f) */
/* WARNING: Removing unreachable block (ram,0x0001404c9865) */

void FUN_1404c97e0(char param_1,uint param_2)

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
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RDI;
  
  uRam00000001346197ec = uRam00000001346197ec & param_2;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(byte)in_RAX | *in_RAX)
                           );
  uVar6 = (uint)puVar7 | *puVar7;
  bVar4 = (byte)uVar6;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((byte)(uVar6 >> 8) | bVar4,bVar4));
  bVar5 = bVar4 + *(char *)(ulonglong)uVar6;
  uVar3 = (undefined3)(uVar6 >> 8);
  cVar9 = (char)param_2;
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
      uVar2 = (uint)&stack0x00000000 + uVar6;
      cRam000000014baca493 = cRam000000014baca493 + param_1;
      *(ulonglong *)((ulonglong)(uVar2 + CARRY1(bVar4,bVar5)) - 8) =
           (ulonglong)
           (uVar6 + param_2 +
           (uint)(CARRY4((uint)&stack0x00000000,uVar6) || CARRY4(uVar2,(uint)CARRY1(bVar4,bVar5))));
      *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) =
           *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + param_2;
      *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
           *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(char *)(unaff_RDI + 0x1f01004c) = *(char *)(unaff_RDI + 0x1f01004c) + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

