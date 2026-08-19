// Function: FUN_1404bb490
// Addr: 1404bb490
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb4c6) overlaps instruction at (ram,0x0001404bb4c2)
    */
/* WARNING: Removing unreachable block (ram,0x0001404bb4f1) */

void FUN_1404bb490(byte *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  uint *in_RAX;
  char *pcVar5;
  byte bVar6;
  byte bVar7;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar8;
  uint *puVar4;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  bVar6 = (byte)((ulonglong)param_1 >> 8);
  unaff_RSI[0x21] = unaff_RSI[0x21] + (char)param_2;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)in_RAX;
  *param_2 = *param_2 + bVar3;
  *(byte *)in_RAX = (char)*in_RAX + bVar3;
  bVar3 = bVar3 | param_2[in_FS_OFFSET];
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  unaff_RSI[0x21] = unaff_RSI[0x21] + (char)param_2;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *(undefined1 **)(unaff_RSI + -8) = unaff_RSI;
  *puVar4 = *puVar4 & (uint)puVar4;
  lVar2 = *(longlong *)(unaff_RSI + -8);
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar3;
  if (CARRY1(bVar1,bVar3)) {
    pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,0x4b)) + -0x38);
    *pcVar5 = *pcVar5 + bVar7;
    out(*unaff_RSI,(short)param_2);
    *(undefined1 **)(lVar2 + -8) = unaff_RSI + 1;
    bVar8 = CARRY1(*param_2,bVar7);
    *param_2 = *param_2 + bVar7;
    if (-1 < (char)*param_2) {
      bVar8 = CARRY1(*param_2,bVar6);
      *param_2 = *param_2 + bVar6;
      *(undefined8 *)(lVar2 + -0x10) = 0x340f0008;
    }
    pcVar5 = (char *)(ulonglong)CONCAT31(0x68843,bVar8 + '\x03');
    GlobalDescriptorTableRegister(*(undefined8 *)param_2);
    *pcVar5 = *pcVar5 + (char)param_1;
    *param_1 = *param_1 + bVar8 + '\x03';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

