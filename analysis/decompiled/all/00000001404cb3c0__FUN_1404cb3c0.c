// Function: FUN_1404cb3c0
// Addr: 1404cb3c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb3c0(undefined8 param_1,ushort param_2)

{
  undefined1 in_AL;
  uint *puVar1;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  out(param_2 & 0xff,in_AL);
  *unaff_RDI = *unaff_RSI;
  puVar1 = (uint *)func_0x0001564db417();
  *puVar1 = *puVar1 | (uint)puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

