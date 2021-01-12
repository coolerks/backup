/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-09-28 08:36:24
 * @LastEditTime: 2020-12-17 18:20:21
 */
struct  student  {
        int  id;
        char  name[20];
};
int  cmp_stu_id(const  void*  a,  const  void*  b)
{
    struct  student *pa=a,*pb=b;
    return (pa->id>pb->id)-(pa->id<pb->id);
}
int  cmp_stu_name(const  void*  a,  const  void*  b)
{
    struct  student *pa=a,*pb=b;
    return strcmp(pa->name,pb->name);
}
int  cmp_stu_name_desc(const  void*  a,  const  void*  b)
{
    struct  student *pa=a,*pb=b;
    return -(strcmp(pa->name,pb->name));
}