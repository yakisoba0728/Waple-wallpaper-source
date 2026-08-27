// Function: FUN_14002fb70
// Addr: 14002fb70
// Size: 337 bytes


void FUN_14002fb70(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_38 [8];
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_30 = (local_30 >> 8 & 0xfffffe) << 8;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar2 = FUN_140086de0(&DAT_1404df5e8,"general","");
  lVar3 = FUN_140087490(uVar2,&DAT_1404737fc,&DAT_140473800);
  if (lVar3 != 0) {
    uVar2 = FUN_140086de0(uVar2,&DAT_1404737fc,&DAT_140473800);
    FUN_140085520(local_38,uVar2);
  }
  uVar2 = FUN_140086de0(local_38,"unpauseaero","");
  cVar1 = FUN_140086300(uVar2);
  if ((cVar1 != '\0') || (param_2 != 0x21)) {
    if (param_2 == 0x21) {
      DAT_1404e52e4 = DAT_1404e52e4 | 2;
    }
    else {
      DAT_1404e52e4 = DAT_1404e52e4 & 0xfffffffd;
    }
    PostMessageW(DAT_1404e5280,0x113,0x68,0);
  }
  if ((byte)local_30 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014002fc6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
              *(uint *)(&LAB_14002fcfc + (ulonglong)(byte)local_30 * 4)))
              (IMAGE_DOS_HEADER_140000000.e_magic +
               *(uint *)(&LAB_14002fcfc + (ulonglong)(byte)local_30 * 4));
    return;
  }
  FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  lVar3 = local_28;
  if (local_28 != 0) {
    FUN_140017240(local_28 + 0x40);
    FUN_140017240(lVar3 + 0x20);
    FUN_140017240(lVar3);
    thunk_FUN_14028af80(lVar3,0x60);
  }
  return;
}

