// Function: FUN_1404a2ee0
// Addr: 1404a2ee0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2ee0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined6 uVar5;
  char cVar6;
  char cVar7;
  undefined6 uVar8;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar7 = (char)((ulonglong)param_2 >> 8);
  cVar6 = (char)param_2;
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar4 = (undefined1)((ulonglong)param_1 >> 8);
  cVar3 = (char)param_1;
  pcVar2 = (char *)func_0x0001614a7912();
  *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,cVar6)) =
       *(byte *)CONCAT62(uVar8,CONCAT11(cVar7,cVar6)) | (byte)pcVar2;
  *pcVar2 = *pcVar2 + cVar3;
  cVar1 = in(0x17);
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)pcVar2 >> 8),cVar1);
  *(char *)CONCAT62(uVar5,CONCAT11(uVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(uVar4,cVar3)) + cVar6;
  *pcVar2 = *pcVar2 + cVar1;
  *(undefined1 *)CONCAT62(uVar5,CONCAT11(uVar4,cVar3)) =
       *(undefined1 *)CONCAT62(uVar5,CONCAT11(uVar4,cVar3));
  *pcVar2 = *pcVar2 + cVar1;
  *(char *)CONCAT62(uVar5,CONCAT11(uVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(uVar4,cVar3)) + cVar6;
  *pcVar2 = *pcVar2 + cVar1;
  *(undefined1 *)CONCAT62(uVar5,CONCAT11(uVar4,cVar3)) =
       *(undefined1 *)CONCAT62(uVar5,CONCAT11(uVar4,cVar3));
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

