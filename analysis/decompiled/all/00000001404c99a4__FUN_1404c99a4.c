// Function: FUN_1404c99a4
// Addr: 1404c99a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c99a4(char *param_1,byte *param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  char cVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  char *unaff_RDI;
  char unaff_R12B;
  
  bVar2 = in_AL ^ *(byte *)CONCAT71(in_register_00000001,in_AL);
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 | bVar2;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + (byte)param_1;
  do {
  } while (*(char *)CONCAT71(in_register_00000001,bVar2) == '\0');
  cVar3 = (char)param_2 + unaff_BL * '\x02';
  pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + -0x673bffce);
  *pcVar1 = *pcVar1 + bVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + -0x673bffce);
  *pcVar1 = *pcVar1 + bVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar2) + -0x25ffcddd);
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar2) + 0x19004c98);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) ^ (byte)param_1;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *(char *)(CONCAT71(in_register_00000001,bVar2) ^ 0xf0) =
       *(char *)(CONCAT71(in_register_00000001,bVar2) ^ 0xf0) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

