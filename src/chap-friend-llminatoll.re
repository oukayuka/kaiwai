= 「キャラクターが台詞を喋っているだけ」の解説漫画にならないために

//flushright{
湊川あい @llminatoll @<br>{}
技術書界隈を盛り上げる会 #11 ゲスト
//}

== 湊川あい @llminatoll の自己紹介

IT漫画家の湊川（みなとがわ）あい @llminatoll です。
漫画で楽しく技術が学べる『わかばちゃんと学ぶ』シリーズ著者。
階段の0段目で這いつくばりながら、わかりやすさを愚直に追求し続けている川底の泥のような存在になりたい。
解説文を書くのも、漫画を描くのも好きです。でも脱稿はもっと好きです！

ファンシーラットとハムスターを飼っています。
最近ハマっているのは、ズッキーニをオリーブオイルとニンニクで炒めたやつです。

 * Amazon著者ページ @<href>{http://urx3.nu/Sa7U}
 ** 『わかばちゃんと学ぶ』シリーズの商業誌
 ** わかばちゃんと学ぶ Git使い方入門、わかばちゃんと学ぶ Webサイト制作の基本、わかばちゃんと学ぶ Googleアナリティクス など。

 * BOOTH @<href>{https://llminatoll.booth.pm/}
 ** 『わかばちゃんと学ぶ』シリーズの同人誌
 ** マンガでわかるDocker、マンガでわかるRuby、告白に学ぶHTTPSステータスコード など

== 「漫画技術書」を作るために必要な要素とは？

皆さんも見たことはありませんか？「キャラクターがただ台詞を喋っているだけ」の解説漫画を。

あれって、まったく頭に入ってこないですよね。
なぜ、わかりやすいはずの漫画という形式に変換されているにもかかわらず、逆にわかりにくくなってしまっているのでしょうか。

理由はズバリ、漫画家が「言われたとおりに描かされている」状態だからです。
漫画家自身がそのテーマを理解していない/理解できないままで描いているわけです。

これ、非常にもったいない。
なぜなら、漫画家が本来得意とする、ビジュアル化する力・ストーリーに感情を乗せる力が抜け落ちた状態になるからです。
わかりやすい漫画を作るには、漫画家本人が「実際にその技術を使い、たくさんつまづいて、ナルホドと感動する瞬間」を通過する必要があるのです。

その漫画家は、自分の仕事の目的を「指示通りに絵を描くこと」と認識しているでしょうか。
それとも「わかりやすい解説書を作ること」や「この技術の素晴らしさを読者に伝えること」と認識しているでしょうか。
後者の状態にありながらフルコミットで取り組んで初めて、漫画と解説のいいところがミックスされた最高の漫画技術書が出来上がります。

誤解のないように申し上げますと、私は何も「全部1人でやれ」と強要しているわけではないです。
私自身、テーマによって共著や監修についてもらうことがあります。たとえば『マンガでわかるRuby』は、Rubyエンジニアの @youchan さんとの共著ですし、
『わかばちゃんと学ぶ Git使い方入門』は、GitをC言語で再実装するほどGitが大好きな @DQNEO さんに監修についてもらいました。

漫画家とエンジニア、二人三脚で書かれた本でも、わかりやすい解説漫画は描けます。
お互いの理解のギャップを埋めていく努力が核になります。理想的なやりとりは次のとおりです。

 * 漫画家「この理解で合っていますか？」
 * エンジニア「だいたい合っています。でもエンジニアの間では、レイテンシという言葉を使うことの方が一般的ですね」
 * 漫画家「承知しました。しかし、初心者はレイテンシという言葉を聞いてもわからないと思うので、このコマの前に『そもそもレイテンシって何？』というシーンを挟みたいと思います！やまびこの比喩を漫画の中に入れてみるのはどうでしょう？返事が返ってくるのが早い = 低レイテンシ、みたいな」
 * エンジニア「比喩表現を入れるというアイデアはいいですね。ただ、やまびこは投げかけたものがそのまま返ってくるだけなので、読者から正確ではないというツッコミが入るかもしれません。」
 * 漫画家「ふむふむ。では、テレビ中継の比喩はどうでしょうか？　現地のレポーターとアナウンサーの間で、数秒のタイムラグが発生しているイメージです」

ただし、これを実現しようとすると、漫画と解説を1人で作るのと同じぐらい、いやそれ以上の労力が必要になります。
たとえば、エンジニアが「Gitを漫画で解説する本を作ろう」と思い立ったとします。
自分が書き始める前に、まず漫画家にGitの概念を教えるところから始まります。
実際に使ってもらい、漫画のシナリオに落とし込んでもらう必要があるからです。
その上で、漫画家の出してきた比喩のアイデアや図解に、技術的に間違いがないかどうか精査を行います。
漫画家のモチベーションを保ちながらも、修正が必要な部分は的確にフィードバックし、漫画のストーリーにあわせてチュートリアルや補足説明を肉付けしていきます。
最後に、第三者にもチェックしてもらいながら、微調整して完了です。

どうでしょうか？やりとりの数が多くて、非常に高コストですね。

プログラミングに不慣れな漫画家は、間違いを指摘され続けると劣等感を持ってしまい「自分はITに向いていない」「自分はエンジニアになるわけじゃないのに、なんでこんなに勉強させられているんだ」とモチベーションが下がってしまう可能性があります。
エンジニア側としても「勉強する気がないのか」「それなら、やっぱり自分が全部シナリオも書いてしまおう。君は絵だけ描いてくれればいいから」という諦めの気持ちになってしまいます。

この共作を成功させるためには、次のいずれかの要素が必要です。

 * A. 漫画家と技術ライターの間に強固な信頼関係がある （ダメ出しをしても、お互いに前向きに修正できる）
 * B. 自発的に学ぶタイプの漫画家が漫画も解説文も8割制作する。技術ライターは監修として表現を微調整したり、その技術の有識者としてコラムを書いたりする
 * C. 自発的に学ぶタイプの漫画家が全部1人でやる
 * E. 絵心がある技術ライターが、漫画のネーム、図解イラストの下書きまで手掛ける。漫画家は絵の仕上げに徹する
 * D. 2人の間にめちゃくちゃにディレクションが上手い編集担当がジョインする

私の場合は、A・B・Eのパターンが多いです。

 * Aパターン： マンガでわかるRuby
 * Bパターン： わかばちゃんと学ぶGit、マンガでわかるサーバー監視入門、マンガでわかるDocker
 * Cパターン： わかばちゃんと学ぶGoogleアナリティクス、わかばちゃんと学ぶWebサイト制作の基本

Cパターンについては「業務経験3年以上 + 大量の参考図書を読みあさり、うんうんうなりながら、1年かけて1人で250ページ書けるかな」という肌感覚です。
Eパターンは、経験したことがありません。この方法で作ったよ！という方がいたら、興味あるので @llminatoll にTwitterでDMしてください。
Dパターンは、編集さん自体に国宝級のディレクション能力 + 技術の勘所 が必須だと思われます。この方式はトレンドプロさんが見事に実現されていると思います。
漫画技術書を作りたくなったら参考にしてみてください。

ちなみに、お金の話をすると、ズバリ割りに合いません。
特に、自分で絵を描かない場合、漫画家さんへの原稿料だけで大赤字確定です。
そもそも技術書というジャンル自体ニッチですから「漫画技術書でボロ儲け」なんて甘い話にはなりません。その点ご注意くださいね。
狂った情熱があるからこそやれる変態趣味だと思っておいてください。

「技術を漫画で学ぶ？　それ本当に現場で使えんの？」
そう言われたくない。
そう言わせない解説漫画を絶対に作ってやる。
泥だらけになりながら、究極のわかりやすさを追求する旅は続く。


== 技術書典に出展するようになったきっかけ

一言で言うと、正夢に導かれたからですかね。
すみません、ドン引きしないでくださいね。私は霊感は皆無です（笑）。

2016年、Twitterを見ていたところ、技術書典というおもしろそうなイベントの様子が流れてきました。
2017年春に、第2回目が開かれるということで、技術書典2から出典することにしました。同人誌のイベントに出るのはこれが初めてでした。
この頃はまだ東京に住んでいなかったので、手製本をスーツケースに詰め込んで新幹線で参戦することに。
前日に自宅のプリンターで印刷し、手作業でパッチンパッチン製本した、温かみのある（笑）Gitコマンドの漫画でした。
20冊ぐらいしか作れなかったですし、今思えば不出来なものでしたが、買っていってくれる方がいらっしゃってそれがとても嬉しかったですね。

実はこの一部始終を、2015年に私は正夢として見ていたのでした。
会社員を辞めようか迷っていた頃、次々と正夢が続いたことがありました。
正夢になるかどうかは夢を見たときにはわからないのですが、妙に具体的という特徴があります。
「手製本をスーツケースに詰め込み、時計をチラッと見て、そろそろ行かなきゃ！と家から出ていく」シーン。
そして「スーツケースを引きずりながら見知らぬ道を歩く」シーン。
正夢を見た当時は、まさか自分がサークル主になるとは思っていませんでした。
にも関わらず、これらがデジャヴのように目の前で再現されたではありませんか。

正夢のとおりになると「その道で正解ですよ」と言われているような感じがして、実際そのとおりになりました。
結局その後、会社員からフリーランスになり、何も人脈がないところから上京して3年ほど活動できているわけですから、正夢に感謝ですね。
ちなみに軌道に乗ってからは、一切正夢を見なくなりました。「お前はもう大丈夫」っていうことなんだと思います。

== この界隈にいるのはなぜか

かれこれ3年前から『もくもく執筆会』というコミュニティを熊谷さん @es_kumagai と一緒に主催しています。
コロナ禍の前までは1ヶ月に1回、欠かさず開催してきました。その中で知り合っていった方々が多いですね。
皆さん穏やかで、かつ技術に対して情熱のある方々ばかりです。
この界隈は派閥や上下関係もないですし、平和に楽しく執筆できる環境が整っていると思います。
親方Projectさんの合同誌など、初参加の人でも入りやすいサークルもあります。

『もくもく執筆会』は現在、リアルでのイベントは開催していませんが、Twitter上での執筆会は行っています。
参加方法は簡単。作業中の進捗を #techbook_meetup というハッシュタグでつぶやくだけです！
ぜひお気軽にツイートしてこの界隈にジョインしてくださいね。

== 今後の思い

今後も『わかばちゃんと学ぶ』シリーズのわかばちゃんたちの世界を広げていってあげたいです。
海に行ったり山に行ったり、家でダラダラしたりして、ゆるくワイワイしてほしいですね。
PHPさんが結構人気なので、もっと描いてあげたいなという気持ちがあります。
PHPさんは女性読者からの人気が厚いですね。先日PHPさんへのファンレターもいただきました。ありがとうございます。
私は前職で主に触ってたプログラミング言語がPHPだったのでPHP好きですよ。

== 展望

技術書全体に対しての展望をひとつ。現在は、技術書の電子版はPDFやEPUBが主流ですよね。
しかし、改めて考えてみれば、わざわざ技術書をPDFやEPUBに変換するのって二度手間じゃないですか？
エンジニアは Markdown で書けるし、ブラウザ上の方がコードもコピーしやすい。
将来的には、HTML + CSSのWebページの形式で、技術書の販売ができるのがスタンダードになればいいなと思います。
イメージとしては note のエンジニア版みたいな感じです。
「それなら note でやればいいんじゃない？」と言われてしまいそうですが、note は Markdown に対応してませんし、コードのシンタックスハイライトも対応してないんですよね。
そんなプラットフォームが今後誕生することを期待しています。
