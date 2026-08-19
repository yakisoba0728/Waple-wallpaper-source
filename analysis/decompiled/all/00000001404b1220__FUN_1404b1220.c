// Function: FUN_1404b1220
// Addr: 1404b1220
// Size: 1 bytes


void FUN_1404b1220(undefined8 param_1)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char cVar2;
  undefined6 uVar3;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar2 = (char)((ulonglong)param_1 >> 8);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 2);
  *pcVar1 = *pcVar1 + cVar2;
  *(undefined1 *)CONCAT62(uVar3,CONCAT11(cVar2,0x15)) =
       *(undefined1 *)CONCAT62(uVar3,CONCAT11(cVar2,0x15));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

