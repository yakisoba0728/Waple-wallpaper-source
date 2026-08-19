// Function: FUN_1404abc68
// Addr: 1404abc68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abc68(int param_1)

{
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + param_1;
  bRam0000000142bac035 = bRam0000000142bac035 << 1 | (char)bRam0000000142bac035 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

