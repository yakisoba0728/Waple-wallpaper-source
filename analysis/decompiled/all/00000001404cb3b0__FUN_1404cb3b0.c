// Function: FUN_1404cb3b0
// Addr: 1404cb3b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb3b0(undefined8 param_1,ushort param_2)

{
  undefined1 in_AL;
  char *pcVar1;
  uint *puVar2;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  param_2 = param_2 & 0xff;
  out(param_2,in_AL);
  *unaff_RDI = *unaff_RSI;
  pcVar1 = (char *)func_0x0001406db407();
  *pcVar1 = *pcVar1 + (char)pcVar1;
  out(param_2 & 0xff,(char)pcVar1);
  unaff_RDI[1] = unaff_RSI[1];
  puVar2 = (uint *)func_0x0001564db417();
  *puVar2 = *puVar2 | (uint)puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

