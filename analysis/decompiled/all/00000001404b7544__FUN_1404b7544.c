// Function: FUN_1404b7544
// Addr: 1404b7544
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7544(undefined8 param_1,uint param_2)

{
  longlong in_RAX;
  int unaff_ESI;
  bool bVar1;
  
  bVar1 = CARRY4(uRam000000017260754e,param_2);
  uRam000000017260754e = uRam000000017260754e + param_2;
  *(int *)(in_RAX + 0x10) = *(int *)(in_RAX + 0x10) + unaff_ESI + (uint)bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

