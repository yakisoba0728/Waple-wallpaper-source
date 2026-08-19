// Function: FUN_1404bb4a0
// Addr: 1404bb4a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb4c6) overlaps instruction at (ram,0x0001404bb4c2)
    */
/* WARNING: Removing unreachable block (ram,0x0001404bb4f1) */

void FUN_1404bb4a0(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint *in_RAX;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  char *unaff_RDI;
  bool bVar5;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  bVar3 = (byte)((ulonglong)param_1 >> 8);
  (param_2 + 2)[(longlong)param_1] =
       (param_2 + 2)[(longlong)param_1] + (char)((ulonglong)in_RAX >> 8);
  unaff_RSI[0x21] = unaff_RSI[0x21] + (char)param_2;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = *param_1;
  *param_1 = *param_1 + (byte)in_RAX;
  if (CARRY1(bVar1,(byte)in_RAX)) {
    pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,0x4b)) + -0x38);
    *pcVar2 = *pcVar2 + bVar4;
    out(*unaff_RSI,(short)param_2);
    *(undefined1 **)(unaff_RSI + -8) = unaff_RSI + 1;
    bVar5 = CARRY1(*param_2,bVar4);
    *param_2 = *param_2 + bVar4;
    if (-1 < (char)*param_2) {
      bVar5 = CARRY1(*param_2,bVar3);
      *param_2 = *param_2 + bVar3;
      *(undefined8 *)(unaff_RSI + -0x10) = 0x340f0008;
    }
    pcVar2 = (char *)(ulonglong)CONCAT31(0x68843,bVar5 + '\x03');
    GlobalDescriptorTableRegister(*(undefined8 *)param_2);
    *pcVar2 = *pcVar2 + (char)param_1;
    *param_1 = *param_1 + bVar5 + '\x03';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

