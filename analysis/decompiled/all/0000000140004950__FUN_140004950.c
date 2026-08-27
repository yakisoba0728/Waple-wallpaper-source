// Function: FUN_140004950
// Addr: 140004950
// Size: 435 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140004950(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *local_res8;
  undefined *local_res10;
  undefined *local_res18 [2];
  
  lVar1 = FUN_1402c9a6c(2);
  _DAT_1404e4040 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  _DAT_1404e4048 = 0;
  _DAT_1404e4050 = 0;
  _DAT_1404e4058 = (undefined *)0x0;
  _DAT_1404e4060 = (undefined *)0x0;
  _DAT_1404e4068 = 0;
  _DAT_1404e4070 = 0;
  _DAT_1404e4078 = (undefined *)0x0;
  _DAT_1404e4080 = (undefined *)0x0;
  _DAT_1404e4088 = 0;
  _DAT_1404e4090 = (undefined *)0x0;
  _DAT_1404e4098 = (undefined *)0x0;
  lVar2 = FUN_14028af20(0x10);
  if (lVar2 == 0) {
    _DAT_1404e40a0 = 0;
  }
  else {
    uVar3 = FUN_140291700(1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
    _DAT_1404e40a0 = lVar2;
  }
  _DAT_1404e4040 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  DAT_1404e40bc = 0;
  DAT_1404e40b1 = 0;
  _DAT_1404e4058 = &DAT_1404e4048;
  _DAT_1404e4060 = &DAT_1404e4050;
  _DAT_1404e4078 = &DAT_1404e4068;
  _DAT_1404e4080 = &DAT_1404e4070;
  _DAT_1404e4090 = &DAT_1404e4088;
  _DAT_1404e4098 = &DAT_1404e408c;
  _DAT_1404e4050 = 0;
  _DAT_1404e4070 = 0;
  _DAT_1404e4088 = 0;
  _DAT_1404e4048 = 0;
  _DAT_1404e4068 = 0;
  if (lVar1 != 0) {
    local_res8 = (undefined *)0x0;
    local_res10 = (undefined *)0x0;
    local_res18[0] = (undefined *)0x0;
    _get_stream_buffer_pointers(lVar1,&local_res8,&local_res10,local_res18);
    _DAT_1404e4058 = local_res8;
    _DAT_1404e4060 = local_res8;
    _DAT_1404e4078 = local_res10;
    _DAT_1404e4080 = local_res10;
    _DAT_1404e4090 = local_res18[0];
    _DAT_1404e4098 = local_res18[0];
  }
  _DAT_1404e40b4 = DAT_1404e8f40;
  _DAT_1404e40a8 = 0;
  _DAT_1404e40c0 = lVar1;
  FUN_14028b410(&LAB_140425860);
  return;
}

