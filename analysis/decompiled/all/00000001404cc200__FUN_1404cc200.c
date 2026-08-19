// Function: FUN_1404cc200
// Addr: 1404cc200
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc200(void)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined3 uVar4;
  byte bVar5;
  uint uVar6;
  char cVar9;
  longlong in_RAX;
  longlong unaff_RBP;
  uint unaff_ESI;
  uint uVar10;
  uint uVar7;
  byte *pbVar8;
  
  uVar7 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((byte)((ulonglong)in_RAX >> 8) | *(byte *)(unaff_RBP + in_RAX),
                                  (char)in_RAX));
  uVar6 = uVar7 + 0x90000f54;
  uVar7 = (uint)(0x6ffff0ab < uVar7);
  uVar3 = unaff_ESI + *(uint *)((ulonglong)uVar6 * 2);
  uVar10 = uVar3 + uVar7;
  uVar4 = (undefined3)(uVar6 >> 8);
  bVar5 = (char)uVar6 + '4' +
          (CARRY4(unaff_ESI,*(uint *)((ulonglong)uVar6 * 2)) || CARRY4(uVar3,uVar7));
  pbVar8 = (byte *)(ulonglong)CONCAT31(uVar4,bVar5);
  pcVar1 = (char *)((longlong)pbVar8 * 9 + 0x21004c);
  cVar9 = (char)(uVar6 >> 8);
  *pcVar1 = *pcVar1 + cVar9;
  bVar2 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar5;
  pcVar1 = (char *)((ulonglong)
                    CONCAT31(uVar4,bVar5 + 0x34 +
                                   (CARRY4(uVar10,*(uint *)((longlong)pbVar8 * 2)) ||
                                   CARRY4(uVar10 + *(uint *)((longlong)pbVar8 * 2),
                                          (uint)CARRY1(bVar2,bVar5)))) * 9 + 0x2e21004c);
  *pcVar1 = *pcVar1 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

