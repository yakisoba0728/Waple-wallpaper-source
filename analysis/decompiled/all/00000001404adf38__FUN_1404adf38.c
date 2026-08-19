// Function: FUN_1404adf38
// Addr: 1404adf38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404adf4b) overlaps instruction at (ram,0x0001404adf4a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404adf4a) */

void FUN_1404adf38(longlong param_1,longlong param_2)

{
  byte in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  char *pcVar2;
  int unaff_ESP;
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + 7) = *(int *)(unaff_RDI + 7) + unaff_ESP;
  *(char *)(unaff_RDI + 0x54) = *(char *)(unaff_RDI + 0x54) + in_AH;
  bVar1 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) |
          *(byte *)(param_2 + 6);
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ bVar1;
  *pcVar2 = *pcVar2 + bVar1;
  sysret();
  return;
}

