// Function: FUN_1404c1248
// Addr: 1404c1248
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1248(int param_1,char *param_2)

{
  int *piVar1;
  undefined8 in_RAX;
  byte in_CF;
  
  piVar1 = (int *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam300028ff350028fe) * 2 + 1);
  *piVar1 = *piVar1 + param_1 + (uint)in_CF;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

