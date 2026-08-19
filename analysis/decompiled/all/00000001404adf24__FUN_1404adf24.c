// Function: FUN_1404adf24
// Addr: 1404adf24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404adf4b) overlaps instruction at (ram,0x0001404adf4a)
    */
/* WARNING: Removing unreachable block (ram,0x0001404adf4a) */

void FUN_1404adf24(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char *pcVar3;
  int unaff_ESP;
  byte *unaff_RDI;
  char in_CF;
  
  bVar2 = in_AL + '\x01' + in_CF;
  cRam000000014a2aeb1d = cRam000000014a2aeb1d + (char)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar1 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2));
  *(int *)(unaff_RDI + 7) = *(int *)(unaff_RDI + 7) + unaff_ESP;
  unaff_RDI[0x54] = unaff_RDI[0x54] + in_AH;
  bVar2 = bVar2 | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) |
          *(byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) + cVar1,(char)param_2)) + 6);
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || bVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ bVar2;
  *pcVar3 = *pcVar3 + bVar2;
  sysret();
  return;
}

