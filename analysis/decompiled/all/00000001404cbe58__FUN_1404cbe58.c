// Function: FUN_1404cbe58
// Addr: 1404cbe58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbe58(byte *param_1,undefined2 param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte bVar7;
  longlong in_RAX;
  char *pcVar6;
  char unaff_BL;
  uint uVar8;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    pcVar6 = (char *)(in_RAX + 0x21190049 + (longlong)unaff_RSI * 8);
    *pcVar6 = *pcVar6 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *param_1;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar7;
  uVar5 = (uint)CARRY1(bVar2,bVar7);
  uVar1 = (uint)in_RAX + *(uint *)(in_RAX * 2);
  iVar4 = uVar1 + uVar5;
  uVar8 = (uint)&stack0x00000000;
  bVar2 = (char)iVar4 +
          (CARRY4(uVar8,uVar8) ||
          CARRY4(uVar8 * 2,(uint)(CARRY4((uint)in_RAX,*(uint *)(in_RAX * 2)) || CARRY4(uVar1,uVar5))
                ));
  uVar5 = CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11((byte)((uint)iVar4 >> 8) | bVar2,bVar2)) +
          0x34ec1e00;
  *(char *)(unaff_RDI + -0x13) = *(char *)(unaff_RDI + -0x13) + (char)(uVar5 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  in(param_2);
  uVar5 = in(param_2);
  pcVar6 = (char *)(ulonglong)uVar5;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar6 = *pcVar6 + (char)param_1;
  *pcVar6 = *pcVar6 + (char)uVar5;
  cVar3 = in(0x14);
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar3);
  *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

