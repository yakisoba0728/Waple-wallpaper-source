// Function: FUN_1404a2220
// Addr: 1404a2220
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2220(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  char cVar3;
  undefined6 in_register_00000002;
  char *pcVar4;
  uint unaff_EDI;
  
  cVar3 = (in_AH + (char)((ulonglong)param_2 >> 8)) * '\x02' + in_AL;
  bVar2 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,in_AL));
  *(undefined1 *)
   (CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) +
   CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2))) = 8;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 || bVar2 != 0) {
    *pcVar4 = *pcVar4 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = bVar2 - 0x20;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,cVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,cVar1)) ^ (byte)param_2;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(cVar3,cVar1)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(cVar3,cVar1)) & unaff_EDI;
  cRam00000001604a3289 = cRam00000001604a3289 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

