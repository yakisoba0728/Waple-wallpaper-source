// Function: FUN_1404aae2c
// Addr: 1404aae2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aae2c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte in_AL;
  int unaff_ESI;
  byte *unaff_RDI;
  undefined1 *puStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  *param_4 = *param_4 + (in_AL ^ 0xe6);
  uStack_8 = param_2;
  uStack_10 = param_2;
  puStack_18 = (undefined1 *)&uStack_10;
  *(int *)((longlong)&puStack_18 + (longlong)param_1) =
       *(int *)((longlong)&puStack_18 + (longlong)param_1) + unaff_ESI;
  *param_1 = *param_1 + (char)param_2;
  bVar1 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI << 1 | (char)bVar1 < '\0';
  if ((char)bVar1 < '\0' == (char)*unaff_RDI < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

