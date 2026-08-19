// Function: FUN_1404ac134
// Addr: 1404ac134
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac134(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  uint *puVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  puVar2 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)in_RAX,(char)in_RAX));
  *puVar2 = *puVar2 | (uint)puVar2;
  *(char *)(unaff_RDI + -0x50b4fff1) =
       *(char *)(unaff_RDI + -0x50b4fff1) + (char)((ulonglong)param_1 >> 8);
  uVar1 = LocalDescriptorTableRegister();
  *puVar2 = uVar1;
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *(char *)(unaff_RSI + -0x50) = *(char *)(unaff_RSI + -0x50) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

