// Function: FUN_1404c0e84
// Addr: 1404c0e84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0e84(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar4;
  undefined8 in_RAX;
  longlong lVar3;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)param_2;
  cVar4 = (char)((ulonglong)in_RAX >> 8) + '(';
  lVar3 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar4,(char)in_RAX))
                         >> 8),(char)in_RAX + cVar4);
  uVar2 = (uint)lVar3;
  *(uint *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(0x28,uVar5))) =
       *(uint *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(0x28,uVar5))) & uVar2;
  puVar1 = (uint *)(lVar3 * 2);
  *puVar1 = *puVar1 | uVar2;
  *(uint *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(0x28,uVar5))) =
       *(uint *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(0x28,uVar5))) |
       CONCAT22(uVar6,CONCAT11(0x28,uVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

