// Function: FUN_1404a81c0
// Addr: 1404a81c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a81c0(undefined8 param_1,char *param_2)

{
  char cVar1;
  char in_AL;
  undefined7 in_register_00000001;
  int iVar2;
  char *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  iVar2 = CONCAT31((int3)((ulonglong)param_1 >> 8),(char)param_1 + *unaff_RBX);
  unaff_RDI[0x21004b] = unaff_RDI[0x21004b] + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  cVar1 = cRam84000b02a4000b02;
  *(char *)(longlong)iVar2 = *(char *)(longlong)iVar2 + cRam84000b02a4000b02;
  *param_2 = *param_2 + cVar1 + *(char *)CONCAT44((int)((ulonglong)param_1 >> 0x20),iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

