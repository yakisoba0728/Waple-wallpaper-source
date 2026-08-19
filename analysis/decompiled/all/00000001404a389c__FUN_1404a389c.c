// Function: FUN_1404a389c
// Addr: 1404a389c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a3922) */

void FUN_1404a389c(undefined8 param_1,char param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  byte bVar1;
  char *unaff_RBX;
  byte *unaff_RDI;
  
  *unaff_RBX = *unaff_RBX + param_2;
  bVar1 = (byte)param_1 ^ *unaff_RDI;
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),bVar1) == 1 || bVar1 == 0) {
    *unaff_RBX = *unaff_RBX;
    uRam00000001344f38b0 = uRam00000001344f38b0 & in_EAX;
    *(uint *)CONCAT44(in_register_00000004,in_EAX) =
         *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

