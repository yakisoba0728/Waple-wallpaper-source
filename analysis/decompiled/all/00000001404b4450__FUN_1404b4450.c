// Function: FUN_1404b4450
// Addr: 1404b4450
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4450(undefined8 param_1,int *param_2)

{
  char cVar1;
  char in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  undefined6 uVar3;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar2 = in_AL + 0x50;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  *param_2 = *param_2 + unaff_EBX;
  cVar1 = (char)((ulonglong)param_2 >> 8) -
          *(char *)(CONCAT71(in_register_00000001,
                             bVar2 | *(byte *)CONCAT71(in_register_00000001,bVar2)) +
                   CONCAT44(unaff_0000001c,unaff_EBX));
  *(char *)CONCAT62(uVar3,CONCAT11(cVar1,(char)param_2)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar1,(char)param_2)) + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

