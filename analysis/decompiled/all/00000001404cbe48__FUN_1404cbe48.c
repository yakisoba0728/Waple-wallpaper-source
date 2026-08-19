// Function: FUN_1404cbe48
// Addr: 1404cbe48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbe48(byte *param_1,undefined2 param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  byte bVar8;
  char *in_RAX;
  char *pcVar7;
  char unaff_BL;
  char unaff_BH;
  uint uVar9;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  char in_SF;
  char in_OF;
  
  cVar4 = (char)param_1;
  if (in_OF != in_SF) {
    *in_RAX = *in_RAX + cVar4;
    pcVar7 = (char *)(((ulonglong)in_RAX ^ 0x1e) - 0x15);
    *pcVar7 = *pcVar7 + (char)((ulonglong)in_RAX ^ 0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_RAX[(longlong)unaff_RSI * 8 + 0x210049] = in_RAX[(longlong)unaff_RSI * 8 + 0x210049] + cVar4;
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar7 = unaff_RSI + (longlong)&stack0x00000000;
  cVar1 = *pcVar7;
  *pcVar7 = *pcVar7 + unaff_BH;
  if (SCARRY1(cVar1,unaff_BH) == *pcVar7 < '\0') {
    in_RAX[(longlong)unaff_RSI * 8 + 0x21190049] =
         in_RAX[(longlong)unaff_RSI * 8 + 0x21190049] + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = *param_1;
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar8;
  uVar6 = (uint)CARRY1(bVar3,bVar8);
  uVar2 = (uint)in_RAX + *(uint *)((longlong)in_RAX * 2);
  iVar5 = uVar2 + uVar6;
  uVar9 = (uint)&stack0x00000000;
  bVar3 = (char)iVar5 +
          (CARRY4(uVar9,uVar9) ||
          CARRY4(uVar9 * 2,
                 (uint)(CARRY4((uint)in_RAX,*(uint *)((longlong)in_RAX * 2)) || CARRY4(uVar2,uVar6))
                ));
  uVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11((byte)((uint)iVar5 >> 8) | bVar3,bVar3)) +
          0x34ec1e00;
  *(char *)(unaff_RDI + -0x13) = *(char *)(unaff_RDI + -0x13) + (char)(uVar6 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  in(param_2);
  uVar6 = in(param_2);
  pcVar7 = (char *)(ulonglong)uVar6;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar7 = *pcVar7 + cVar4;
  *pcVar7 = *pcVar7 + (char)uVar6;
  cVar4 = in(0x14);
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),cVar4);
  *pcVar7 = *pcVar7 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

