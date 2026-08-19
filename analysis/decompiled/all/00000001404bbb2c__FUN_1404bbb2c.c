// Function: FUN_1404bbb2c
// Addr: 1404bbb2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbb2c(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint *in_RAX;
  uint *puVar1;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  puVar1 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xa0);
  *puVar1 = *puVar1 & (uint)puVar1;
  *(char *)(param_1 + 0x4e540021) = *(char *)(param_1 + 0x4e540021) - (char)((ulonglong)in_RAX >> 8)
  ;
  *param_4 = *param_4 + -0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

