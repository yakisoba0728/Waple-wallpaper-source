// Function: FUN_1404ad280
// Addr: 1404ad280
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad280(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  uint unaff_ESI;
  longlong unaff_RDI;
  byte in_CF;
  
  *(int *)(unaff_RDI + param_1) =
       *(int *)(unaff_RDI + param_1) + (int)&stack0x00000000 +
       (uint)(unaff_ESI < *(uint *)(in_RAX + param_2) ||
             unaff_ESI - *(uint *)(in_RAX + param_2) < (uint)in_CF);
  *(int *)((ulonglong)&stack0x00000000 & 0xffffffff) =
       *(int *)((ulonglong)&stack0x00000000 & 0xffffffff) + (int)&stack0x00000000 +
       (uint)(0x5ffff1ab < (uint)in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

