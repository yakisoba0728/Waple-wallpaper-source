// Function: FUN_1404c4b5c
// Addr: 1404c4b5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c4b94) overlaps instruction at (ram,0x0001404c4b93)
    */

void FUN_1404c4b5c(byte *param_1,int *param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  char *in_RAX;
  char *pcVar7;
  byte unaff_BL;
  char unaff_BH;
  uint unaff_ESP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    *in_RAX = *in_RAX + (char)in_RAX;
    *in_RAX = *in_RAX + (char)in_RAX;
    bVar3 = *param_1;
    *param_1 = *param_1 + unaff_BL;
    uVar6 = (int)in_RAX + 0x74150008 + (uint)CARRY1(bVar3,unaff_BL);
    pcVar7 = (char *)((ulonglong)((uVar6 | *(uint *)(ulonglong)uVar6) + 0x15000a64) ^ 9);
    cRam00000000e12c5ccb = cRam00000000e12c5ccb + (char)param_2;
    *param_1 = *param_1 + (char)pcVar7;
    *pcVar7 = *pcVar7 + (char)pcVar7;
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x68);
    *pcVar1 = *pcVar1 + unaff_BH;
    uVar6 = (int)pcVar7 + 0xd2976c00;
    pcVar7 = (char *)(ulonglong)uVar6;
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x36);
    *pcVar1 = *pcVar1 + unaff_BH;
    bVar5 = (byte)uVar6;
    *pcVar7 = *pcVar7 + bVar5;
    *pcVar7 = *pcVar7 + bVar5;
    bVar3 = *param_1;
    *param_1 = *param_1 + bVar5;
    *param_2 = (*param_2 - (int)param_1) - (uint)CARRY1(bVar3,bVar5);
    *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (uint *)(CONCAT44(unaff_00000034,unaff_ESI) + (longlong)param_2);
  uVar6 = *puVar2;
  uVar4 = *puVar2;
  *puVar2 = (uVar4 - unaff_ESP) - (uint)in_CF;
  param_2[0x4b48640] =
       (param_2[0x4b48640] - unaff_ESI) -
       (uint)(uVar6 < unaff_ESP || uVar4 - unaff_ESP < (uint)in_CF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

