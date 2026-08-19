// Function: FUN_1404d5ed8
// Addr: 1404d5ed8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5ed8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong lVar1;
  char cVar2;
  undefined6 uVar3;
  undefined6 *unaff_RBX;
  byte *unaff_RDI;
  char in_ZF;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  lVar1 = (ulonglong)(uint)*unaff_RBX - 1;
  if (lVar1 == 0 || in_ZF != '\0') {
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  }
  cVar2 = (char)((ulonglong)param_2 >> 8) + *(char *)CONCAT71(in_register_00000001,in_AL);
  *(int *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_2)) =
       *(int *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_2)) + (int)lVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

