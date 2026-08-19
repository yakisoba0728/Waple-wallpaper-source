// Function: FUN_1404c784c
// Addr: 1404c784c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c784c(char *param_1,undefined2 param_2)

{
  undefined1 *puVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  puVar1 = (undefined1 *)(CONCAT44(in_register_00000004,in_EAX) + 0x30);
  *puVar1 = *puVar1;
  out(param_2,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) ^ (byte)in_EAX;
  *(byte *)(unaff_RDI + 0x4c) = *(byte *)(unaff_RDI + 0x4c) ^ (byte)((ushort)param_2 >> 8);
  *param_1 = *param_1 + (byte)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

